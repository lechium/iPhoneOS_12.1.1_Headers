/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, ASSettingsTaskOofGetResponse;

@interface ASSettingsTaskOofResponse : ASItem {

	NSNumber* _status;
	ASSettingsTaskOofGetResponse* _oofGetResult;

}

@property (nonatomic,retain) NSNumber * status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) ASSettingsTaskOofGetResponse * oofGetResult;              //@synthesize oofGetResult=_oofGetResult - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASSettingsTaskOofGetResponse *)oofGetResult;
-(void)setOofGetResult:(ASSettingsTaskOofGetResponse *)arg1 ;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
@end
