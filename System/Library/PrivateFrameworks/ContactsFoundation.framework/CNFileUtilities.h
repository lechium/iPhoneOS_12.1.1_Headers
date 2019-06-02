/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNFileServices;
@interface CNFileUtilities : NSObject {

	id<CNFileServices> _services;

}
+(id)sharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)sharedInstance;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
