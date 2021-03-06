/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebPreviewLoader : NSObject {

	RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> >* _resourceLoader;
	ResourceResponse* _response;
	RefPtr<WebCore::PreviewLoaderClient, WTF::DumbPtrTraits<WebCore::PreviewLoaderClient> >* _client;
	unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter> >* _converter;
	RetainPtr<NSMutableArray>* _bufferedDataArray;
	BOOL _hasSentDidReceiveResponse;
	BOOL _hasProcessedResponse;
	RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> >* _bufferedData;
	long long _lengthReceived;
	BOOL _needsToCallDidFinishLoading;

}
-(void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3 ;
-(void)_sendDidReceiveResponseIfNecessary;
-(id)initWithResourceLoader:(ResourceLoader*)arg1 resourceResponse:(const ResourceResponse*)arg2 ;
-(void)finishedAppending;
-(void)appendDataArray:(id)arg1 ;
-(void)failed;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
@end

