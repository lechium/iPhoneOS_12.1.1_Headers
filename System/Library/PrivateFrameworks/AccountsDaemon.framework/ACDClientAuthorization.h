/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACDClient, NSSet, NSDictionary;

@interface ACDClientAuthorization : NSObject {

	BOOL _isGranted;
	ACDClient* _client;
	NSSet* _grantedPermissions;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL isGranted;                          //@synthesize isGranted=_isGranted - In the implementation block
@property (nonatomic,retain) ACDClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSSet * grantedPermissions;              //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(BOOL)isGranted;
-(NSSet *)grantedPermissions;
-(id)initForClient:(id)arg1 ;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
-(void)setIsGranted:(BOOL)arg1 ;
-(ACDClient *)client;
-(void)setClient:(ACDClient *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

