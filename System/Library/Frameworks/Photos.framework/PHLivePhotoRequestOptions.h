/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHLivePhotoRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _routeToNewImageManager;
	long long _version;
	long long _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) BOOL routeToNewImageManager;                                          //@synthesize routeToNewImageManager=_routeToNewImageManager - In the implementation block
@property (assign,nonatomic) long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) long long deliveryMode;                                               //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(BOOL)routeToNewImageManager;
-(void)setRouteToNewImageManager:(BOOL)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setDeliveryMode:(long long)arg1 ;
-(id)progressHandler;
-(long long)deliveryMode;
-(BOOL)isNetworkAccessAllowed;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(void)setProgressHandler:(id)arg1 ;
@end
