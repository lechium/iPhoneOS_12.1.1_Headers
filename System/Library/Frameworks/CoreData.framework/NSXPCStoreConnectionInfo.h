/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSXPCStoreServerPerConnectionCache;

@interface NSXPCStoreConnectionInfo : NSObject {

	NSDictionary* _entitlements;
	NSXPCStoreServerPerConnectionCache* _cache;
	SCD_Struct_NS1 _token;
	id _userInfo;
	int _lock;

}
-(id)initForToken:(SCD_Struct_NS1)arg1 entitlementNames:(id)arg2 cache:(id)arg3 ;
-(id)persistentStoreCoordinator;
-(id)entitlements;
-(void)dealloc;
-(id)userInfo;
-(void)setUserInfo:(id)arg1 ;
-(id)description;
-(id)cache;
-(SCD_Struct_NS1)auditToken;
@end

