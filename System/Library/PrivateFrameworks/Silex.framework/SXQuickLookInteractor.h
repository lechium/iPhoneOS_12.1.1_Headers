/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookInteractor.h>
@class SXQuickLookFile;


@protocol SXQuickLookInteractor <NSObject>
@property (nonatomic,readonly) SXQuickLookFile * file; 
@required
-(void)loadThumbnailWithSize:(CGSize)arg1;
-(SXQuickLookFile *)file;

@end


@protocol SXQuickLookInteractorDelegate, SXQuickLookService;
@class SXQuickLookFile, NSString;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor> {

	id<SXQuickLookInteractorDelegate> delegate;
	SXQuickLookFile* _file;
	id<SXQuickLookService> _service;

}

@property (nonatomic,readonly) id<SXQuickLookService> service;                               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) id<SXQuickLookInteractorDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXQuickLookFile * file;                                       //@synthesize file=_file - In the implementation block
-(id<SXQuickLookService>)service;
-(void)loadThumbnailWithSize:(CGSize)arg1 ;
-(id)initWithFile:(id)arg1 service:(id)arg2 ;
-(SXQuickLookFile *)file;
-(void)setDelegate:(id<SXQuickLookInteractorDelegate>)arg1 ;
-(id<SXQuickLookInteractorDelegate>)delegate;
@end

