import csv

class Athlete:
    def __init__(self, name, nbr_medals):
        self._name = name
        self._nbr_medals = nbr_medals

    def compete(self):
        return "is not competing"

def main():
    champions = []
    with open("champions.csv", 'r') as file:
        csvreader = csv.reader(file)
        for row in csvreader:
            if row[2] == 'swm':
                champions.append(Swimmer(row[0], row[1]))
            elif row[2] == 'run':
                champions.append(Runner(row[0], row[1]))
            elif row[2] == 'wlf':
                champions.append(Lifter(row[0], row[1]))
    for athlt in champions:
        print(athlt, athlt.compete())

if __name__ == "__main__":
    main()
