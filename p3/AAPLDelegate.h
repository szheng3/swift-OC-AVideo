//
// Created by Shuai Zheng on 4/16/20.
// Copyright (c) 2020 Shuai Zheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AAPLDelegate <NSObject>
-(void)shouldEnableRecordUI:(bool)enable;
-(void)shouldEnableCameraUI:(bool)enable;
-(void)videoRecordingComplete:(NSURL*)videoURL;

@end