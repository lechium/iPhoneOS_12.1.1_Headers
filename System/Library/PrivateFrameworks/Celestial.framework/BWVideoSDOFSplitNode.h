/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {

	opaqueCMFormatDescriptionRef _originalVideoFormatDescription;
	BWNodeOutput* _originalOutput;
	BWNodeOutput* _sdofOutput;

}

@property (nonatomic,readonly) BWNodeOutput * originalOutput;              //@synthesize originalOutput=_originalOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sdofOutput;                  //@synthesize sdofOutput=_sdofOutput - In the implementation block
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(BWNodeOutput *)originalOutput;
-(BWNodeOutput *)sdofOutput;
-(id)init;
-(void)dealloc;
@end

