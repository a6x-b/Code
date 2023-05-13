import pandas as pd
import matplotlib.pyplot as plt

plt.rcParams["figure.figsize"] = [10, 5]
plt.rcParams["figure.autolayout"] = True
DF = pd.read_csv("cardio_data.csv", sep=";")
All_rows = DF.index.stop
# (process)
DF.insert(len(DF.columns), 'BMI', " ")
DF.insert(len(DF.columns), 'BMI Categories', " ")
HTH_LOW = 0
HTH_AHI = 0
HTH_CNT = 0

OBS_LOW = 0
OBS_AHI = 0
OBS_CNT = 0

OVW_LOW = 0
OVW_AHI = 0
OVW_CNT = 0

UNW_LOW = 0
UNW_AHI = 0
UNW_CNT = 0
for index, row in DF.iterrows():
    DF.loc[index, "age"] = DF.loc[index, "age"] // 365
    DF.loc[index, "BMI"] = round(
        DF.loc[index, "weight"]/((DF.loc[index, "height"])/100)**2)

    TEMP = DF.loc[index, "BMI"]
    if TEMP < 18.5:
        DF.loc[index, "BMI Categories"] = "underweight"
        UNW_LOW += DF.loc[index, "ap_lo"]
        UNW_AHI += DF.loc[index, "ap_hi"]
        UNW_CNT += 1
    elif TEMP < 25:
        DF.loc[index, "BMI Categories"] = "healthy"
        HTH_LOW += DF.loc[index, "ap_lo"]
        HTH_AHI += DF.loc[index, "ap_hi"]
        HTH_CNT += 1
    elif TEMP < 30:
        DF.loc[index, "BMI Categories"] = "overweight"
        OVW_LOW += DF.loc[index, "ap_lo"]
        OVW_AHI += DF.loc[index, "ap_hi"]
        OVW_CNT += 1
    else:
        DF.loc[index, "BMI Categories"] = "obese"
        OBS_LOW += DF.loc[index, "ap_lo"]
        OBS_AHI += DF.loc[index, "ap_hi"]
        OBS_CNT += 1

HTH_LOW /= HTH_CNT
HTH_AHI /= HTH_CNT

OBS_LOW /= OBS_CNT
OBS_AHI /= OBS_CNT

OVW_LOW /= OVW_CNT
OVW_AHI /= OVW_CNT

UNW_LOW /= UNW_CNT
UNW_AHI /= UNW_CNT

DataF = {"bmi category": ["Healthy      ", "obese       ", "overweight     ", "underweight   "], "ap_lo     ": [float("{0:.6f}".format(
    HTH_LOW)), float("{0:.6f}".format(OBS_LOW)), float("{0:.6f}".format(OVW_LOW)), float("{0:.6f}".format(UNW_LOW))],
    "ap_hi": [float("{0:.6f}".format(HTH_AHI)), float("{0:.6f}".format(OBS_AHI)), float("{0:.6f}".format(OVW_AHI)), float("{0:.6f}".format(UNW_AHI))]}
DataF = pd.DataFrame(DataF)

DF.to_csv("DF.csv", sep=";",index=None)
DataF.to_csv("DataF.csv", sep="\t", index=None)
# (subplots)
fig, axes = plt.subplots(1, 2)
DF["height"].hist(ax=axes[0], grid=False)
axes[0].set_title("Histogram of heights in cm")
DF["weight"].hist(ax=axes[1], grid=False)
axes[1].set_title("Histogram of weights in kg")

plt.show()