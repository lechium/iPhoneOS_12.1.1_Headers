/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {

	NSMutableSet* _clients;
	NSXPCConnection* _searchHelperConnection;

}

@property (nonatomic,retain) NSXPCConnection * searchHelperConnection;              //@synthesize searchHelperConnection=_searchHelperConnection - In the implementation block
+(id)sharedManager;
-(id)searchHelperConnectionRequestedByClient:(id)arg1 ;
-(void)setSearchHelperConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)searchHelperConnection;
-(id)init;
-(void)removeClient:(id)arg1 ;
@end

