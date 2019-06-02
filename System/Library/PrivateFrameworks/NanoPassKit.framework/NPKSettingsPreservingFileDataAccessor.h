/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKFileDataAccessor.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor {

	NPKCompanionAgentConnection* _connection;
	NSString* _objectUniqueID;

}

@property (nonatomic,retain) NPKCompanionAgentConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * objectUniqueID;                             //@synthesize objectUniqueID=_objectUniqueID - In the implementation block
-(NSString *)objectUniqueID;
-(void)updateSettings:(unsigned long long)arg1 ;
-(void)setObjectUniqueID:(NSString *)arg1 ;
-(NPKCompanionAgentConnection *)connection;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
@end
