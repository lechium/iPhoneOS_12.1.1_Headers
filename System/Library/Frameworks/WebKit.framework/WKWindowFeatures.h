/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject <WKObject> {

	ObjectStorage<API::WindowFeatures> _windowFeatures;

}

@property (nonatomic,readonly) NSNumber * _locationBarVisibility; 
@property (nonatomic,readonly) NSNumber * _scrollbarsVisibility; 
@property (nonatomic,readonly) NSNumber * _fullscreenDisplay; 
@property (nonatomic,readonly) NSNumber * _dialogDisplay; 
@property (nonatomic,readonly) NSNumber * menuBarVisibility; 
@property (nonatomic,readonly) NSNumber * statusBarVisibility; 
@property (nonatomic,readonly) NSNumber * toolbarsVisibility; 
@property (nonatomic,readonly) NSNumber * allowsResizing; 
@property (nonatomic,readonly) NSNumber * x; 
@property (nonatomic,readonly) NSNumber * y; 
@property (nonatomic,readonly) NSNumber * width; 
@property (nonatomic,readonly) NSNumber * height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(NSNumber *)menuBarVisibility;
-(NSNumber *)statusBarVisibility;
-(NSNumber *)toolbarsVisibility;
-(NSNumber *)allowsResizing;
-(NSNumber *)_locationBarVisibility;
-(NSNumber *)_scrollbarsVisibility;
-(NSNumber *)_fullscreenDisplay;
-(NSNumber *)_dialogDisplay;
-(void)dealloc;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)x;
-(NSNumber *)y;
@end

