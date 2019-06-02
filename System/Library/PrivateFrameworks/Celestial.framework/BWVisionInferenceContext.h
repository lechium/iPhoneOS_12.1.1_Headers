/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VNSequenceRequestHandler;

@interface BWVisionInferenceContext : NSObject {

	VNSequenceRequestHandler* _sequenceRequestHandler;

}

@property (nonatomic,readonly) VNSequenceRequestHandler * sequenceRequestHandler;              //@synthesize sequenceRequestHandler=_sequenceRequestHandler - In the implementation block
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
+(void)initialize;
-(int)prepareForInference;
-(VNSequenceRequestHandler *)sequenceRequestHandler;
-(id)init;
-(void)dealloc;
-(BOOL)isPrepared;
@end
