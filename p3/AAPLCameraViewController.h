/*
Copyright (C) 2015 Apple Inc. All Rights Reserved.
See LICENSE.txt for this sample’s licensing information

Abstract:
View controller for camera interface.
*/

@import UIKit;

@class AAPLPreviewView;
@protocol AAPLDelegate;


@interface AAPLCameraViewController : UIViewController
@property (nonatomic, weak) AAPLPreviewView *previewView;
@property id<AAPLDelegate> delegate;
- (void)toggleMovieRecording;
- (void)changeCamera;

@end
