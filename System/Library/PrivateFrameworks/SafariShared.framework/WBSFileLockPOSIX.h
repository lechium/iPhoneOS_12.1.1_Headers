/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFileLock.h>

@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {

	int _fileDescriptor;

}
-(void)releaseLock;
-(id)initWithFileDescriptor:(int)arg1 ;
-(void)dealloc;
@end
