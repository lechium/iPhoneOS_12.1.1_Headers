/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACM2SVTransportControllerDelegate <NSObject>
@optional
-(void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(/*^block*/id)arg3;
-(void)twoSVTransportControllerCancelFetchingImages:(id)arg1;

@required
-(void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

