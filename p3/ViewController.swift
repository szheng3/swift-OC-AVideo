//
//  ViewController.swift
//  p3
//
//  Created by Shuai Zheng on 4/16/20.
//  Copyright © 2020 Shuai Zheng. All rights reserved.
//

import UIKit

class ViewController: AAPLCameraViewController,AAPLDelegate {

    @IBOutlet weak var video: AAPLPreviewView!

    override func viewDidLoad() {
        delegate=self
        previewView = video
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    func shouldEnableRecordUI(_ enable: Bool) {
        print(enable)
    }
}

