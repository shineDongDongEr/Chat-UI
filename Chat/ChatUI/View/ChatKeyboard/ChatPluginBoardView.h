//
//  ChatPluginBoardView.h
//  Chat
//
//  Created by 李立 on 2017/9/30.
//  Copyright © 2017年 李立. All rights reserved.
//

#import <UIKit/UIKit.h>


@class ChatPluginBoardView;
@protocol ChatPluginBoardViewDelegate <NSObject>
@optional

/**
 点击了插件（plugin）

 @param pluginView ChatPluginBoardView
 @param index plugin的索引
 */
- (void)pluginBoardView:(ChatPluginBoardView *)pluginView didSelectPluginItemAtIndex:(NSInteger)index;

@end


/**
 扩展视图-例如：图片，相机，位置...
 */
@interface ChatPluginBoardView : UIView
/** 代理对象 */
@property (weak, nonatomic) id<ChatPluginBoardViewDelegate> delegate;

@end



