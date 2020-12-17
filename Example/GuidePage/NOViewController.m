//
//  NOViewController.m
//  GuidePage
//
//  Created by fyh11 on 12/17/2020.
//  Copyright (c) 2020 fyh11. All rights reserved.
//

#import "NOViewController.h"
#import "GuidePage.h"

@interface NOViewController ()

@end

@implementation NOViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self addGuidePage];
}

- (void)addGuidePage{
    if ([[NSUserDefaults standardUserDefaults] boolForKey:BOOLFORKEY]) {
        [[NSUserDefaults standardUserDefaults] setBool:YES forKey:BOOLFORKEY];
        // 视频引导页
        [self setVideoGuidePage];
    }
}

#pragma mark - 设置APP视频引导页
- (void)setVideoGuidePage {
    NSURL *videoURL = [NSURL URLWithString:@"http://clips.vorwaerts-gmbh.de/big_buck_bunny.mp4"];
    GuidePage *guidePage = [[GuidePage alloc] initWithFrame:self.view.bounds videoURL:videoURL];
    [self.view addSubview:guidePage];
}

@end
