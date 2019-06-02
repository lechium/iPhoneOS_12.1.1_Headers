/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {

	NSMutableSet* _principalSearchProperties;

}

@property (nonatomic,retain) NSMutableSet * principalSearchProperties;              //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
+(id)copyParseRules;
-(void)addPrincipalSearchProperty:(id)arg1 ;
-(void)setPrincipalSearchProperties:(NSMutableSet *)arg1 ;
-(NSMutableSet *)principalSearchProperties;
-(id)init;
-(id)description;
@end

