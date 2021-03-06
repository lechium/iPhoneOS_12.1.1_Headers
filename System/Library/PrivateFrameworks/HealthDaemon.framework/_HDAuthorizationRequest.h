/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {

	/*^block*/id _completionHandler;
	NSUUID* _identifier;
	NSSet* _typesToWrite;
	NSSet* _typesToRead;

}

@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToWrite;              //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;               //@synthesize typesToRead=_typesToRead - In the implementation block
-(id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)typesToWrite;
-(NSSet *)typesToRead;
-(void)invokeCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSUUID *)identifier;
-(id)description;
@end

