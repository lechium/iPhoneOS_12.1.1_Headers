/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCDomainsCacheEntry : NSObject {

	BOOL _subdomainsMatch;
	NSString* _domain;
	NSString* _path;
	NSNumber* _port;

}

@property (assign,nonatomic) BOOL subdomainsMatch;              //@synthesize subdomainsMatch=_subdomainsMatch - In the implementation block
@property (nonatomic,retain) NSString * domain;                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * path;                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * port;                   //@synthesize port=_port - In the implementation block
+(id)normalizedPatternString:(id)arg1 ;
-(id)initWithPattern:(id)arg1 ;
-(BOOL)subdomainsMatch;
-(void)setSubdomainsMatch:(BOOL)arg1 ;
-(BOOL)matchesURL:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)domain;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)port;
@end
