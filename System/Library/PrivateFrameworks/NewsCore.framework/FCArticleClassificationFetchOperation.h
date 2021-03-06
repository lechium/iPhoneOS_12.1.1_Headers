/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCCloudContext, NSString, FCHeldRecords;

@interface FCArticleClassificationFetchOperation : FCMultiStepFetchOperation {

	FCCloudContext* _context;
	NSString* _articleID;
	FCHeldRecords* _heldArticleRecords;
	FCHeldRecords* _heldTopicRecords;

}

@property (nonatomic,retain) FCCloudContext * context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * articleID;                            //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldArticleRecords;              //@synthesize heldArticleRecords=_heldArticleRecords - In the implementation block
@property (nonatomic,retain) FCHeldRecords * heldTopicRecords;                //@synthesize heldTopicRecords=_heldTopicRecords - In the implementation block
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(id)completeFetchOperation;
-(id)fetchArticleWithCompletion:(/*^block*/id)arg1 ;
-(id)fetchTopicsWithCompletion:(/*^block*/id)arg1 ;
-(void)setHeldArticleRecords:(FCHeldRecords *)arg1 ;
-(FCHeldRecords *)heldArticleRecords;
-(void)setHeldTopicRecords:(FCHeldRecords *)arg1 ;
-(FCHeldRecords *)heldTopicRecords;
-(id)initWithContext:(id)arg1 articleID:(id)arg2 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
@end

