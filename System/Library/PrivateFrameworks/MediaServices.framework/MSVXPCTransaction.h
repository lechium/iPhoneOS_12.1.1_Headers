/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)endTransactionOnDate:(id)arg1 ;
-(id)_identifier;
-(void)endTransaction;
-(void)beginTransaction;
-(void)dealloc;
-(NSString *)name;
-(id)description;
-(BOOL)isActive;
-(id)initWithName:(id)arg1 ;
@end

