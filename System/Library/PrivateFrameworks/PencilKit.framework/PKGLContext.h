/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKGLContext : NSObject {

	PKGLContext* _sharedContext;

}

@property (nonatomic,readonly) PKGLContext * sharedContext;              //@synthesize sharedContext=_sharedContext - In the implementation block
+(id)defaultShareContext;
-(id)initWithSharedContext:(id)arg1 ;
-(PKGLContext *)sharedContext;
-(id)init;
@end
