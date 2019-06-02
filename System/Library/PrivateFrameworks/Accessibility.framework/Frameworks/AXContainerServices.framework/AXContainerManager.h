/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXContainerServices.framework/AXContainerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXUIClient;

@interface AXContainerManager : NSObject {

	AXUIClient* _containerServerClient;

}

@property (nonatomic,retain) AXUIClient * containerServerClient;              //@synthesize containerServerClient=_containerServerClient - In the implementation block
+(id)sharedManager;
-(AXUIClient *)containerServerClient;
-(void)writeData:(id)arg1 toFileAtAccessibilityContainerPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainerServerClient:(AXUIClient *)arg1 ;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

