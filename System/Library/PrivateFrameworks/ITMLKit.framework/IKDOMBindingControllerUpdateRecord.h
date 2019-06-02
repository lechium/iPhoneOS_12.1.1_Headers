/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IKDOMBindingControllerUpdateRecord : NSObject {

	BOOL _cancelled;
	/*^block*/id _preUpdate;
	/*^block*/id _update;

}

@property (nonatomic,copy) id preUpdate;                                     //@synthesize preUpdate=_preUpdate - In the implementation block
@property (nonatomic,copy) id update;                                        //@synthesize update=_update - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)preUpdate;
-(void)setPreUpdate:(id)arg1 ;
-(void)setUpdate:(id)arg1 ;
-(id)update;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
@end

