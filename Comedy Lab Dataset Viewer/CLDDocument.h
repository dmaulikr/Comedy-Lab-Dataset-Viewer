//
//  TBZDocument.h
//  Comedy Lab Dataset Viewer
//
//  Created by Toby Harris | http://tobyz.net on 13/05/2014.
//  Copyright (c) 2014 Cognitive Science Group, Queen Mary University of London. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <SceneKit/SceneKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AVKit/AVKit.h>
#import "CLDScene.h"
#import "CLDView.h"

@interface CLDDocument : NSDocument <NSMenuDelegate>

@property (strong) NSURL *movieURL;
@property (strong) NSURL *mocapURL;
@property (strong) NSURL *datasetURL;
@property float movieVolume;
@property bool movieMuted;

- (IBAction) chooseMovie:(id)sender;
- (IBAction) chooseMocapData:(id)sender;
- (IBAction) chooseAnalysisDataset:(id)sender;
- (IBAction) freeSceneViewAddCurrentPov:(id)sender;
- (IBAction) freeSceneViewSetCurrentPov:(id)sender;
- (IBAction) toggleAudienceMask:(id)sender;

@end
