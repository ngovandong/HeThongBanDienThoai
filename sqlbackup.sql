create database vandong
go
 USE [vandong]
GO
/****** Object:  Table [dbo].[CUSTOMER]    Script Date: 11/29/2020 4:41:18 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[CUSTOMER](
	[customer_id] [int] IDENTITY(1,1) NOT NULL,
	[customer_name] [nvarchar](30) NULL,
	[phonenumber] [char](20) NULL,
	[address] [nvarchar](60) NULL,
PRIMARY KEY CLUSTERED 
(
	[customer_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[INVOICE]    Script Date: 11/29/2020 4:41:18 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[INVOICE](
	[invoice_id] [int] IDENTITY(1,1) NOT NULL,
	[customer_id] [int] NULL,
	[date_buy] [date] NULL,
	[total] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[invoice_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[INVOICE_DETAIL]    Script Date: 11/29/2020 4:41:18 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[INVOICE_DETAIL](
	[invoice_id] [int] NOT NULL,
	[smartphone_id] [int] NOT NULL,
	[qty] [int] NULL,
	[unit_price] [int] NULL,
PRIMARY KEY CLUSTERED 
(
	[invoice_id] ASC,
	[smartphone_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[SMARTPHONE]    Script Date: 11/29/2020 4:41:18 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[SMARTPHONE](
	[smartphone_id] [int] IDENTITY(1,1) NOT NULL,
	[smartphone_name] [nvarchar](50) NULL,
	[brand] [nvarchar](20) NULL,
	[price] [int] NULL,
	[qty] [int] NULL,
	[qty_sold] [int] NULL,
	[RAM] [smallint] NULL,
	[ROM] [smallint] NULL,
	[battery] [smallint] NULL,
	[screen] [numeric](5, 2) NULL,
	[color] [nvarchar](20) NULL,
	[cameras] [smallint] NULL,
	[warranty] [nvarchar](20) NULL,
	[others] [nvarchar](50) NULL,
	[deleted] [bit] NOT NULL,
 CONSTRAINT [PK__SMARTPHO__F7EB820AAF889148] PRIMARY KEY CLUSTERED 
(
	[smartphone_id] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[CUSTOMER] ON 

INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (1, N'Ngo Van Dong', N'0935351453          ', N'Dong Khuong 2- Dien Phuong- Dien Ban- Quan Nam')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (2, N'ninh', N'0877654334          ', N'nnn')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (3, N'ninh', N'0987656554          ', N'mug')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (4, N'Tran Van Manh', N'093453454           ', N'k177 Nguyen Luong Bang- Hoa Khanh Bac- Lien Chieu')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (5, N'trang', N'0934                ', N'asdf')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (6, N'dasdf', N'194857              ', N'asdf')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (7, N'asdf', N'asdf                ', N'asdf')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (8, N'1234', N'2345                ', N'asdf')
INSERT [dbo].[CUSTOMER] ([customer_id], [customer_name], [phonenumber], [address]) VALUES (9, N'asdf', N'2345                ', N'asdfhj')
SET IDENTITY_INSERT [dbo].[CUSTOMER] OFF
GO
SET IDENTITY_INSERT [dbo].[INVOICE] ON 

INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (1, 1, CAST(N'2020-11-24' AS Date), 4790000)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (2, 2, CAST(N'2020-11-24' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (3, 3, CAST(N'2020-11-24' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (4, 4, CAST(N'2020-11-25' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (5, 5, CAST(N'2020-11-25' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (6, 6, CAST(N'2020-11-25' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (7, 7, CAST(N'2020-11-25' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (8, 8, CAST(N'2020-11-25' AS Date), 0)
INSERT [dbo].[INVOICE] ([invoice_id], [customer_id], [date_buy], [total]) VALUES (9, 9, CAST(N'2020-11-25' AS Date), 18570000)
SET IDENTITY_INSERT [dbo].[INVOICE] OFF
GO
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 2, 1, 26990000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 3, 2, 9490000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 5, 4, NULL)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 6, 1, 4690000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 7, 1, 7490000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (1, 9, 1, 4790000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (2, 6, 2, 4690000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (3, 7, 2, 7490000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (9, 7, 2, 7490000)
INSERT [dbo].[INVOICE_DETAIL] ([invoice_id], [smartphone_id], [qty], [unit_price]) VALUES (9, 8, 1, 3590000)
GO
SET IDENTITY_INSERT [dbo].[SMARTPHONE] ON 

INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (1, N'Samsung Galaxy Note 10+', N'Samsung', 16490000, 23, 134, 12, 256, 4300, CAST(6.80 AS Numeric(5, 2)), N'black/grey', 3, N'12 months', N'Android 9 (Pie)  ', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (2, N'Samsung Galaxy Note 20 Ultra', N'Samsung', 26990000, 31, 14, 8, 256, 4500, CAST(6.90 AS Numeric(5, 2)), N'black/grey/pink', 3, N'12 months', N'ios', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (3, N'Samsung Galaxy M51', N'Samsung', 9490000, 45, 30, 8, 128, 7000, CAST(6.70 AS Numeric(5, 2)), N'black/white', 3, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (5, N'Samsung Galaxy A10s', N'Samsung', 3690000, 16, 54, 2, 32, 4000, CAST(6.20 AS Numeric(5, 2)), N'black/red/green', 2, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (6, N'Samsung Galaxy A21s', N'Samsung', 4690000, 10, 43, 3, 32, 4000, CAST(6.50 AS Numeric(5, 2)), N'black/white/blue', 4, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (7, N'Vsmart Aris', N'Vsmart', 7490000, 25, 145, 8, 128, 4000, CAST(6.39 AS Numeric(5, 2)), N'black/green/blue', 4, N'18 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (8, N'Vsmart Joy 4', N'Vsmart', 3590000, 19, 172, 4, 64, 5000, CAST(6.53 AS Numeric(5, 2)), N'black/white/blue', 4, N'18 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (9, N'Vsmart Live 4', N'Vsmart', 4790000, 9, 272, 6, 64, 5000, CAST(6.50 AS Numeric(5, 2)), N'black/white/blue', 4, N'18 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (10, N'Xiaomi Mi 9', N'Xiaomi', 11900000, 3, 34, 6, 64, 3300, CAST(6.39 AS Numeric(5, 2)), N'black/white', 2, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (11, N'Iphone XR', N'Iphone', 15000000, 3, 34, 3, 64, 2942, CAST(6.10 AS Numeric(5, 2)), N'red', 1, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (12, N'Iphone 11', N'Iphone', 19990000, 6, 53, 4, 64, 3110, CAST(6.10 AS Numeric(5, 2)), N'red/white/black', 2, N'12 months', N'ios', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (14, N'iPhone Xr 64GB', N'Iphone', 14490000, 12, 24, 3, 64, 2942, CAST(6.10 AS Numeric(5, 2)), N'red/black/white', 1, N'12 months', N'', 0)
INSERT [dbo].[SMARTPHONE] ([smartphone_id], [smartphone_name], [brand], [price], [qty], [qty_sold], [RAM], [ROM], [battery], [screen], [color], [cameras], [warranty], [others], [deleted]) VALUES (15, N'Samsung galaxy j7 2016', N'Samsung', 6000000, 4, 23, 3, 16, 2300, CAST(5.50 AS Numeric(5, 2)), N'black/white/yellow', 1, N'12 months', N'', 0)
SET IDENTITY_INSERT [dbo].[SMARTPHONE] OFF
GO
ALTER TABLE [dbo].[INVOICE] ADD  CONSTRAINT [DF_INVOICE_total]  DEFAULT ((0)) FOR [total]
GO
ALTER TABLE [dbo].[INVOICE_DETAIL] ADD  CONSTRAINT [DF_INVOICE_DETAIL_unit_price]  DEFAULT ((0)) FOR [unit_price]
GO
ALTER TABLE [dbo].[SMARTPHONE] ADD  CONSTRAINT [DF_SMARTPHONE_delete]  DEFAULT ((0)) FOR [deleted]
GO
ALTER TABLE [dbo].[INVOICE]  WITH CHECK ADD FOREIGN KEY([customer_id])
REFERENCES [dbo].[CUSTOMER] ([customer_id])
GO
ALTER TABLE [dbo].[INVOICE_DETAIL]  WITH CHECK ADD FOREIGN KEY([invoice_id])
REFERENCES [dbo].[INVOICE] ([invoice_id])
GO
ALTER TABLE [dbo].[INVOICE_DETAIL]  WITH CHECK ADD  CONSTRAINT [FK__INVOICE_D__smart__1DB06A4F] FOREIGN KEY([smartphone_id])
REFERENCES [dbo].[SMARTPHONE] ([smartphone_id])
GO
ALTER TABLE [dbo].[INVOICE_DETAIL] CHECK CONSTRAINT [FK__INVOICE_D__smart__1DB06A4F]
GO
/****** Object:  StoredProcedure [dbo].[procupdatedata]    Script Date: 11/29/2020 4:41:18 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
create proc [dbo].[procupdatedata] -- proc =procedure
@invoice_id int, -- declare variable
@smartphone_id int,
@qty int
as
	begin
		declare @price int
		insert into INVOICE_DETAIL(invoice_id,smartphone_id,qty)
		values (@invoice_id,@smartphone_id,@qty)
		select @price=price from SMARTPHONE where smartphone_id=@smartphone_id
		update INVOICE_DETAIL set unit_price=@price where invoice_id=@invoice_id and smartphone_id=@smartphone_id
		update INVOICE set total=total+ @price*@qty where invoice_id=@invoice_id
	end
GO
