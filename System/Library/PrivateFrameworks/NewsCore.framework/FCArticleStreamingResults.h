/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCStreamingResults.h>

@class FCArticleSearchOperationFeedbackResult;

@interface FCArticleStreamingResults : FCStreamingResults {

	FCArticleSearchOperationFeedbackResult* _feedbackResult;

}

@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedbackResult;              //@synthesize feedbackResult=_feedbackResult - In the implementation block
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setFeedbackResult:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(FCArticleSearchOperationFeedbackResult *)feedbackResult;
@end

