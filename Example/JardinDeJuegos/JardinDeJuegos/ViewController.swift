//
//  ViewController.swift
//  JardinDeJuegos
//
//  Created by Luis Antonio Gomez Vazquez on 16/10/20.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var Lbale: UILabel!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.

    }

    @IBAction func buttonTapped(_ sender: Any) {
        Lbale.text = "Hola"
    }
    
}
