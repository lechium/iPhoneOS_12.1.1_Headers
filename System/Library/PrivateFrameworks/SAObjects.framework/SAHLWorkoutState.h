/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAHLWorkoutState : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * workoutStateValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutStateWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)workoutState;
-(id)encodedClassName;
-(NSString *)workoutStateValue;
-(void)setWorkoutStateValue:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

