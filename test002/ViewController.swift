//
//  ViewController.swift
//  test002
//
//  Created by Navleen Sahi on 2019-11-07.
//  Copyright © 2019 Navleen. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    
    @IBOutlet weak var timerLabel: UILabel!
    
    var seconds = 20
    var timer = Timer()
    var isTimerRunning = false
    
    @objc func startTimer() {
        timer = Timer.scheduledTimer(timeInterval: 1, target: self,selector: (#selector(ViewController.startTimer)), userInfo: nil, repeats: true)
    }
    
    @IBAction func startButton(_ sender: Any) {
           startTimer()
       }
    
    func updateTimer() {
        seconds -= 1
        timerLabel.text = "\(seconds)"
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    
   
    
    
    
}

