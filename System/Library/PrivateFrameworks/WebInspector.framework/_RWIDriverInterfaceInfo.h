/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _RWIRelayClientConnection;

@interface _RWIDriverInterfaceInfo : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _name;
	_RWIRelayClientConnection* _connection;

}

@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                       //@synthesize isActive=_isActive - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 connection:(id)arg3 ;
-(BOOL)updateDriverState:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_RWIRelayClientConnection *)connection;
@end

