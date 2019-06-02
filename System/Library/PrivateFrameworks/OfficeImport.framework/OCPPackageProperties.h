/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OCPPackageProperties : NSObject {

	NSString* mCreator;
	NSString* mDescription;
	NSString* mKeywords;
	NSString* mTitle;
	NSString* mAppVersion;

}
-(id)keywords;
-(id)appVersion;
-(id)creator;
-(void)readFromCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(id)initWithCoreXml:(xmlDoc*)arg1 appXml:(xmlDoc*)arg2 ;
-(void)readFromCoreXml:(xmlDoc*)arg1 ;
-(void)readFromAppXml:(xmlDoc*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)title;
@end
