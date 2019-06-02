/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSDirectoryEnumerator.h>

@class NSString, NSArray, NSFileAttributes;

@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {

	NSString* path;
	NSArray* contents;
	unsigned long long idx;
	NSString* prepend;
	NSAllDescendantPathsEnumerator* under;
	NSFileAttributes* directoryAttributes;
	NSString* pathToLastReportedItem;
	unsigned long long depth;
	BOOL cross;
	char _padding[3];

}
+(id)newWithPath:(id)arg1 prepend:(id)arg2 attributes:(id)arg3 cross:(BOOL)arg4 depth:(unsigned long long)arg5 ;
-(void)skipDescendents;
-(id)_under;
-(id)currentSubdirectoryAttributes;
-(id)fileAttributes;
-(id)directoryAttributes;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
@end
