/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSMediaSocialAuthor.h>
@class NSString, NSArray, NSDictionary;


@protocol SKUIJSMediaSocialAuthor <JSExport>
@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
@required
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;
-(NSString *)entityIdentifier;
-(NSString *)entityType;
-(NSArray *)permissions;
-(NSString *)name;

@end


@class NSString, NSArray, NSDictionary, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor> {

	SKUIMediaSocialAuthor* _mediaSocialAuthor;

}

@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
-(id)initWithSKUIMediaSocialAuthor:(id)arg1 ;
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;
-(NSString *)entityIdentifier;
-(NSString *)entityType;
-(NSArray *)permissions;
-(NSString *)name;
@end

