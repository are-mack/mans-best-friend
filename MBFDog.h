//
//  MBFDog.h
//  Man's Best Friend
//
//  Created by McCawley on 6/23/14.
//  Copyright (c) 2014 Ryan McCawley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBFDog : NSObject

// Our MBFDog class has four properties
@property (nonatomic) int  age;
@property (nonatomic, strong) NSString *breed;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSString *name;

// This class also has five methods declared publicly
-(void)bark;
-(void)barkANumberOfTimes:(int)numberOfTimes;
-(void)changeBreedToWerewolf;
-(void)barkANumberOfTimes:(int)numberOfTimes loudly:(BOOL)isLoud;
-(int)ageInDogYearsFromAge:(int)regularAge;

@end
