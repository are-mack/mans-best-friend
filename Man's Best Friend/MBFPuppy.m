//
//  MBFPuppy.m
//  Man's Best Friend
//
//  Created by McCawley on 7/1/14.
//  Copyright (c) 2014 Ryan McCawley. All rights reserved.
//

#import "MBFPuppy.h"

@implementation MBFPuppy

-(void)givePuppyEyes
{
    NSLog(@":(");
}

// Implementing the method declared in our superclass (MBFDog)
-(void)bark
{
    [super bark];
    NSLog(@"whimper whimper");
    [self givePuppyEyes];
}

@end
