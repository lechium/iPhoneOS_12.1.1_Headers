/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem {

	NSString* _classString;

}

@property (nonatomic,retain) NSString * classString;              //@synthesize classString=_classString - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(BOOL)_isSearchResult;
-(void)setClassString:(NSString *)arg1 ;
-(NSString *)classString;
-(id)init;
@end

