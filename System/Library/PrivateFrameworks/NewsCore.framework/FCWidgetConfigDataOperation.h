/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSData, NSArray, NSDictionary, FCHeldRecords;

@interface FCWidgetConfigDataOperation : FCOperation {

	id<FCContentContext> _context;
	NSData* _widgetConfigData;
	/*^block*/id _widgetConfigDataCompletionHandler;
	NSArray* _recordSources;
	NSDictionary* _recordSourcesByRecordType;
	FCHeldRecords* _cachedRecords;
	NSDictionary* _resultWidgetSectionConfigDictionary;
	NSArray* _resultArticleIDs;
	NSArray* _resultArticleListIDs;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,retain) NSArray * recordSources;                                         //@synthesize recordSources=_recordSources - In the implementation block
@property (nonatomic,retain) NSDictionary * recordSourcesByRecordType;                        //@synthesize recordSourcesByRecordType=_recordSourcesByRecordType - In the implementation block
@property (nonatomic,retain) FCHeldRecords * cachedRecords;                                   //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSDictionary * resultWidgetSectionConfigDictionary;              //@synthesize resultWidgetSectionConfigDictionary=_resultWidgetSectionConfigDictionary - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleIDs;                                      //@synthesize resultArticleIDs=_resultArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * resultArticleListIDs;                                  //@synthesize resultArticleListIDs=_resultArticleListIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;                          //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSData * widgetConfigData;                                         //@synthesize widgetConfigData=_widgetConfigData - In the implementation block
@property (nonatomic,copy) id widgetConfigDataCompletionHandler;                              //@synthesize widgetConfigDataCompletionHandler=_widgetConfigDataCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(NSArray *)recordSources;
-(void)setRecordSources:(NSArray *)arg1 ;
-(void)setRecordSourcesByRecordType:(NSDictionary *)arg1 ;
-(NSDictionary *)resultHeldRecordsByType;
-(FCHeldRecords *)cachedRecords;
-(void)setCachedRecords:(FCHeldRecords *)arg1 ;
-(id)_recordSourceForRecordType:(id)arg1 ;
-(void)_finalizeResultFromCachedRecords;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(NSDictionary *)recordSourcesByRecordType;
-(NSData *)widgetConfigData;
-(void)setWidgetConfigData:(NSData *)arg1 ;
-(void)setWidgetConfigDataCompletionHandler:(id)arg1 ;
-(id)widgetConfigDataCompletionHandler;
-(void)_collectRecordsFromJSONData:(id)arg1 ;
-(NSDictionary *)resultWidgetSectionConfigDictionary;
-(NSArray *)resultArticleIDs;
-(NSArray *)resultArticleListIDs;
-(void)setResultWidgetSectionConfigDictionary:(NSDictionary *)arg1 ;
-(void)setResultArticleListIDs:(NSArray *)arg1 ;
-(void)setResultArticleIDs:(NSArray *)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
@end

