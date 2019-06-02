/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface DCSandboxExtension : NSObject <NSSecureCoding> {

	BOOL _canAccessFileURL;
	BOOL _shouldIssueSandboxExtensionWhenEncoding;
	NSURL* _fileURL;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,readonly) BOOL shouldIssueSandboxExtensionWhenEncoding;              //@synthesize shouldIssueSandboxExtensionWhenEncoding=_shouldIssueSandboxExtensionWhenEncoding - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;                            //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,readonly) BOOL canAccessFileURL;                                     //@synthesize canAccessFileURL=_canAccessFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(long long)sandboxExtensionHandle;
-(void)relinquish;
-(BOOL)shouldIssueSandboxExtensionWhenEncoding;
-(BOOL)canAccessFileURL;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end
