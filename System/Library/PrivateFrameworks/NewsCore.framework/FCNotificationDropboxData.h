/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCNotificationDropboxData.h>
@class NSString;


@protocol FCNotificationDropboxData <NSObject,NSMutableCopying>
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
@required
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(NSString *)notificationUserID;
-(NSString *)baseURLString;

@end


@class NSString, NSDictionary;

@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * baseURLString; 
@property (nonatomic,copy,readonly) NSString * notificationUserID; 
@property (nonatomic,copy,readonly) NSString * deviceToken; 
@property (nonatomic,copy,readonly) NSString * storefrontID; 
-(NSString *)deviceToken;
-(NSString *)storefrontID;
-(NSString *)notificationUserID;
-(NSString *)baseURLString;
-(id)init;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

