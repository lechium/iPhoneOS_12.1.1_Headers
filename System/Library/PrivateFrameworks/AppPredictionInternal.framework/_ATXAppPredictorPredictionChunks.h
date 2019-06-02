/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _ATXAppPredictorPredictionChunks : NSObject {

	NSData* _predictionSetChunk;
	NSData* _feedbackStateChunk;

}

@property (nonatomic,retain) NSData * predictionSetChunk;              //@synthesize predictionSetChunk=_predictionSetChunk - In the implementation block
@property (nonatomic,retain) NSData * feedbackStateChunk;              //@synthesize feedbackStateChunk=_feedbackStateChunk - In the implementation block
-(void)setFeedbackStateChunk:(NSData *)arg1 ;
-(void)setPredictionSetChunk:(NSData *)arg1 ;
-(id)chunkArray;
-(id)joinChunks;
-(NSData *)predictionSetChunk;
-(NSData *)feedbackStateChunk;
@end
