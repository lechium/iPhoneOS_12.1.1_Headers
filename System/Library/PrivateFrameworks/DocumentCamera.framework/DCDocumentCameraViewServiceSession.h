/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding> {

	int _viewServicePid;
	DCDocumentCameraViewServiceSessionRequest* _sessionRequest;
	ICDocCamImageCache* _docCamImageCache;

}

@property (nonatomic,readonly) DCDocumentCameraViewServiceSessionRequest * sessionRequest;              //@synthesize sessionRequest=_sessionRequest - In the implementation block
@property (nonatomic,readonly) int viewServicePid;                                                      //@synthesize viewServicePid=_viewServicePid - In the implementation block
@property (nonatomic,readonly) ICDocCamImageCache * docCamImageCache;                                   //@synthesize docCamImageCache=_docCamImageCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setup;
-(DCDocumentCameraViewServiceSessionRequest *)sessionRequest;
-(int)viewServicePid;
-(id)initWithSessionRequest:(id)arg1 ;
-(ICDocCamImageCache *)docCamImageCache;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

