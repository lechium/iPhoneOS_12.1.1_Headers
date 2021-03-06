/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray;

@interface AVAudioSessionRouteDescription : NSObject {

	void* _impl;

}

@property (readonly) NSString * siriRemoteInputIdentifier; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
-(RouteDescriptionImpl*)privateGetImplementation;
-(id)initWithRawDescription:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)siriRemoteInputIdentifier;
-(BOOL)isEqualToRoute:(id)arg1 ;
-(NSArray *)outputs;
-(NSArray *)inputs;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

