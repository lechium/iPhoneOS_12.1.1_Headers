/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TableViewManager;

@interface RecommendationActionController : NSObject {

	NSString* sectionIdentifier;
	NSString* actionKey;
	TableViewManager* tableManager;

}

@property (nonatomic,retain) NSString * sectionIdentifier; 
@property (nonatomic,retain) NSString * actionKey; 
@property (assign,nonatomic) TableViewManager * tableManager; 
+(id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2 ;
-(NSString *)sectionIdentifier;
-(NSString *)actionKey;
-(void)setActionKey:(NSString *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(TableViewManager *)tableManager;
-(BOOL)isPrimaryRecommendation;
-(id)getSectionInfoWithLongStrings:(BOOL)arg1 ;
-(void)selectPrimaryRecommendation;
-(void)setTableManager:(TableViewManager *)arg1 ;
@end

