/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSMutableArray;

@interface BRCPCSChainEnumerator : NSEnumerator {

	unsigned long long _maxPathDepth;
	BRCPrivateClientZone* _clientZone;
	NSMutableArray* _stack;
	BOOL _failed;

}
-(BOOL)failed;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)nextObject;
@end

