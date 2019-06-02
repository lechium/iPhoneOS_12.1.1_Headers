/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFXPreferences : NSObject {

	CFDictionaryRef _sources;
	opaque_pthread_mutex_t* _sourcesLock;
	CFDictionaryRef _namedVolatileSources;
	opaque_pthread_mutex_t* _namedVolatileSourcesLock;
	CFDictionaryRef _searchLists;
	opaque_pthread_mutex_t* _searchListsLock;
	NSObject*<OS_xpc_object> _agentConnection;
	NSObject*<OS_xpc_object> _daemonConnection;
	NSObject*<OS_xpc_object> _observationConnection;
	unsigned _launchdUID;
	unsigned _euid;

}
+(id)copyDefaultPreferences;
-(void)withSources:(/*^block*/id)arg1 ;
-(void)withConnectionForRole:(int)arg1 performBlock:(/*^block*/id)arg2 ;
-(unsigned)euid;
-(A*)shmemForRole:(SEL)arg1 name:(int)arg2 :(const char*)arg3 ;
-(void)withManagedSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 perform:(/*^block*/id)arg3 ;
-(CFStringRef)copyDescriptionOfSearchLists;
-(void)withSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 cloud:(BOOL)arg5 perform:(/*^block*/id)arg6 ;
-(void)withSuiteSearchListForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 locked:(BOOL)arg3 perform:(/*^block*/id)arg4 ;
-(void)withNamedVolatileSourceForIdentifier:(CFStringRef)arg1 perform:(/*^block*/id)arg2 ;
-(void)withSearchLists:(/*^block*/id)arg1 ;
-(void)withSearchListForIdentifier:(CFStringRef)arg1 container:(CFStringRef)arg2 cloudConfigurationURL:(CFURLRef)arg3 perform:(/*^block*/id)arg4 ;
-(void)alreadylocked_withSearchLists:(/*^block*/id)arg1 ;
-(void)replaceSearchList:(id)arg1 withSearchList:(id)arg2 ;
-(void)with23930198HackSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 container:(CFStringRef)arg4 cloud:(BOOL)arg5 perform:(/*^block*/id)arg6 ;
-(void)updateSearchListsForIdentifier:(CFStringRef)arg1 ;
-(void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(CFArrayRef)arg2 containers:(CFArrayRef)arg3 cloudConfigurationURLs:(CFArrayRef)arg4 ;
-(void)withSnapshotSearchList:(/*^block*/id)arg1 ;
-(void)withNamedVolatileSources:(/*^block*/id)arg1 ;
-(void)alreadylocked_withSources:(/*^block*/id)arg1 ;
-(void)alreadylocked_withNamedVolatileSources:(/*^block*/id)arg1 ;
-(void)assertEquivalence:(BOOL)arg1 ofIdentifiers:(CFArrayRef)arg2 users:(CFArrayRef)arg3 hosts:(CFArrayRef)arg4 containers:(CFArrayRef)arg5 managedFlags:(CFArrayRef)arg6 cloudFlags:(CFArrayRef)arg7 ;
-(void)ingestVolatileStateFromPreferences:(id)arg1 ;
-(void)destroyConnections;
-(BOOL)canLookUpAgents;
-(id)_copyDaemonConnectionSettingUpIfNecessaryForRole:(int)arg1 ;
-(void)unregisterUserDefaultsInstance:(id)arg1 ;
-(void)registerUserDefaultsInstance:(id)arg1 configurationURL:(CFURLRef)arg2 ;
-(void)flushManagedSources;
-(BOOL)appValueIsForcedForKey:(CFStringRef)arg1 appIdentifier:(CFStringRef)arg2 ;
-(BOOL)hasCloudValueForKey:(CFStringRef)arg1 appIdentifier:(CFStringRef)arg2 container:(CFStringRef)arg3 configurationURL:(CFURLRef)arg4 ;
-(BOOL)hasNonRegisteredValueForKey:(CFStringRef)arg1 appIdentifier:(CFStringRef)arg2 container:(CFStringRef)arg3 configurationURL:(CFURLRef)arg4 ;
-(CFArrayRef)copyKeyListForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 host:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)synchronizeEverything;
-(unsigned char)synchronizeIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 host:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)setDaemonCacheEnabled:(BOOL)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(void)notifyOfImpendingDeletionOfUser:(CFStringRef)arg1 ;
-(void)flushCachesForAppIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 ;
-(void)setBackupDisabled:(BOOL)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(void)setAccessRestricted:(BOOL)arg1 forAppIdentifier:(CFStringRef)arg2 ;
-(void)addSuitePreferences:(CFStringRef)arg1 toAppIdentifier:(CFStringRef)arg2 container:(CFStringRef)arg3 ;
-(void)fullCloudSynchronizeForAppIdentifier:(CFStringRef)arg1 container:(CFStringRef)arg2 configurationURL:(CFURLRef)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setCloudSyncEnabled:(BOOL)arg1 forKey:(CFStringRef)arg2 appIdentifier:(CFStringRef)arg3 container:(CFStringRef)arg4 ;
-(void)setValuesForKeys:(CFDictionaryRef)arg1 removingValuesForKeys:(CFArrayRef)arg2 identifier:(CFStringRef)arg3 user:(CFStringRef)arg4 host:(CFStringRef)arg5 container:(CFStringRef)arg6 ;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 appIdentifier:(CFStringRef)arg3 container:(CFStringRef)arg4 configurationURL:(CFURLRef)arg5 ;
-(CFDictionaryRef)copyValuesForKeys:(CFArrayRef)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(CFDictionaryRef)copyManagedValuesForKeys:(CFArrayRef)arg1 identifier:(CFStringRef)arg2 useSystemContainer:(BOOL)arg3 ;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 identifier:(CFStringRef)arg3 user:(CFStringRef)arg4 host:(CFStringRef)arg5 container:(CFStringRef)arg6 ;
-(void*)copyValueForKey:(CFStringRef)arg1 identifier:(CFStringRef)arg2 user:(CFStringRef)arg3 host:(CFStringRef)arg4 container:(CFStringRef)arg5 ;
-(void)preloadAppValuesForIdentifiers:(const _CFString*)arg1 containers:(const _CFString*)arg2 configurationURLs:(const _CFURL*)arg3 count:(long long)arg4 ;
-(void*)copyAppValueForKey:(CFStringRef)arg1 identifier:(CFStringRef)arg2 container:(CFStringRef)arg3 configurationURL:(CFURLRef)arg4 ;
-(void)replaceValuesInSourceForIdentifier:(CFStringRef)arg1 user:(CFStringRef)arg2 host:(CFStringRef)arg3 container:(CFStringRef)arg4 withValues:(CFDictionaryRef)arg5 ;
-(void)removeVolatileSourceForName:(CFStringRef)arg1 ;
-(CFDictionaryRef)copyDictionaryForSourceWithIdentifier:(CFStringRef)arg1 ;
-(CFDictionaryRef)copyDictionaryForVolatileSourceWithName:(CFStringRef)arg1 ;
-(CFDictionaryRef)copyDictionaryForApp:(CFStringRef)arg1 withContainer:(CFStringRef)arg2 ;
-(CFArrayRef)volatileSourceNames;
-(void)resetPreferences:(BOOL)arg1 ;
-(unsigned char)appSynchronizeWithIdentifier:(CFStringRef)arg1 container:(CFStringRef)arg2 ;
-(void)removeSuite:(CFStringRef)arg1 fromApp:(CFStringRef)arg2 withContainer:(CFStringRef)arg3 ;
-(void)replaceValuesInVolatileSourceNamed:(CFStringRef)arg1 withValues:(CFDictionaryRef)arg2 ;
-(void)registerDefaultValues:(CFDictionaryRef)arg1 ;
-(id)init;
-(void)dealloc;
@end

