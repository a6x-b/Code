//
//  ContentView.swift
//  HelloSwiftUI
//
//  Created by عبدالله الزهراني on 07/01/2023.
//

import SwiftUI

struct ContentView: View {
    @State var Counter: Int = 0
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("Count: \(Counter)")
            Button("Add 1", action: {self.Counter += 1})
            
        }
        .padding()
       
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
