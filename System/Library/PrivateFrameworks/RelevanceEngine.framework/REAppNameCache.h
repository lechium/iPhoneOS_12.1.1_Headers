/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary, NSLock;

@interface REAppNameCache : RESingleton {

	NSMutableDictionary* _nameCache;
	NSLock* _lock;

}
-(id)localizedNameForApplicationWithIdentifier:(id)arg1 ;
-(id)init;
@end

