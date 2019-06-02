/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRProgressProxy.h>
#import <libobjc.A.dylib/BRProgressProxyDelegate.h>

@class NSString;

@interface BRGlobalProgressProxy : BRProgressProxy <BRProgressProxyDelegate> {

	NSString* _kind;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)progressProxy:(id)arg1 shouldProxyProgress:(id)arg2 ;
-(id)progressProxy:(id)arg1 localizedDescriptionForProgress:(id)arg2 ;
-(id)initWithGlobalProgressKind:(id)arg1 ;
@end

