/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface WBSTouchIconFetchOperationResult : NSObject {

	BOOL _favicon;
	BOOL _pageRequestDidSucceed;
	BOOL _higherPriorityIconDownloadFailedDueToNetworkError;
	UIImage* _touchIcon;
	NSString* _host;

}

@property (nonatomic,readonly) UIImage * touchIcon;                                                 //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,copy,readonly) NSString * host;                                                //@synthesize host=_host - In the implementation block
@property (getter=isFavicon,nonatomic,readonly) BOOL favicon;                                       //@synthesize favicon=_favicon - In the implementation block
@property (nonatomic,readonly) BOOL pageRequestDidSucceed;                                          //@synthesize pageRequestDidSucceed=_pageRequestDidSucceed - In the implementation block
@property (nonatomic,readonly) BOOL higherPriorityIconDownloadFailedDueToNetworkError;              //@synthesize higherPriorityIconDownloadFailedDueToNetworkError=_higherPriorityIconDownloadFailedDueToNetworkError - In the implementation block
+(id)resultForFetchFailureWithHost:(id)arg1 pageRequestDidSucceed:(BOOL)arg2 ;
+(id)resultWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(BOOL)arg3 pageRequestDidSucceed:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(BOOL)higherPriorityIconDownloadFailedDueToNetworkError;
-(BOOL)pageRequestDidSucceed;
-(id)initWithTouchIcon:(id)arg1 host:(id)arg2 isFavicon:(BOOL)arg3 pageRequestDidSucceed:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(BOOL)isFavicon;
-(UIImage *)touchIcon;
-(NSString *)host;
@end

