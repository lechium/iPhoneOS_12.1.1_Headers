/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SZExtractor <NSObject,NSSecureCoding>
@property (assign,nonatomic,__weak) id<SZExtractorDelegate> extractorDelegate; 
@property (nonatomic,readonly) BOOL doesConsumeExtractedData; 
@optional
-(BOOL)doesConsumeExtractedData;
-(BOOL)consumeExtractedDataIfNeeded;
-(void)prepareForExtractionToPath:(id)arg1 completionBlock:(/*^block*/id)arg2;

@required
-(void)terminateStreamWithError:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)suspendStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)prepareForExtraction:(/*^block*/id)arg1;
-(id<SZExtractorDelegate>)extractorDelegate;
-(void)finishStreamWithCompletionBlock:(/*^block*/id)arg1;
-(void)setExtractorDelegate:(id)arg1;
-(void)supplyBytes:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;

@end

